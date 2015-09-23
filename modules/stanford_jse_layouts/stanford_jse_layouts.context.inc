<?php
/**
 * @file
 * stanford_jse_layouts.context.inc
 * @author Shea McKinney <sheamck@stanford.edu>
 * @author Caryl Westerberg <cjwest@stanford.edu>
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_jse_layouts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_jse';
  $context->description = 'Sitewide - All pages';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-stanford_jsa_layouts-2' => array(
          'module' => 'menu_block',
          'delta' => 'stanford_jsa_layouts-2',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'search_box',
          'weight' => '-10',
        ),
        'bean-jumpstart-footer-social-media--0' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-footer-social-media--0',
          'region' => 'footer',
          'weight' => '-26',
        ),
        'bean-jumpstart-footer-contact-block' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-footer-contact-block',
          'region' => 'footer',
          'weight' => '-25',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
  t('Sitewide');
  t('Sitewide - All pages');
  $export['sitewide_jse'] = $context;

  return $export;
}
