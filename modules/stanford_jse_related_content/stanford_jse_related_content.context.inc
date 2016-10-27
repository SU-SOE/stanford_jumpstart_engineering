<?php
/**
 * @file
 * stanford_jse_related_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_jse_related_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_page_related_content';
  $context->description = 'Related content for all stanford page content type pages';
  $context->tag = 'Related Content';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_page' => 'stanford_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-b0b97e4fb54df88f280eb220fef1829e' => array(
          'module' => 'views',
          'delta' => 'b0b97e4fb54df88f280eb220fef1829e',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Related Content');
  t('Related content for all stanford page content type pages');
  $export['stanford_page_related_content'] = $context;

  return $export;
}
