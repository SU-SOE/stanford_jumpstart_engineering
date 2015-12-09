<?php
/**
 * @file
 * stanford_jse_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_jse_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create stanford_affiliate_organization content'.
  $permissions['create stanford_affiliate_organization content'] = array(
    'name' => 'create stanford_affiliate_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create stanford_private_page content'.
  $permissions['create stanford_private_page content'] = array(
    'name' => 'create stanford_private_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stanford_affiliate_organization content'.
  $permissions['delete any stanford_affiliate_organization content'] = array(
    'name' => 'delete any stanford_affiliate_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stanford_private_page content'.
  $permissions['delete any stanford_private_page content'] = array(
    'name' => 'delete any stanford_private_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stanford_affiliate_organization content'.
  $permissions['delete own stanford_affiliate_organization content'] = array(
    'name' => 'delete own stanford_affiliate_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stanford_private_page content'.
  $permissions['delete own stanford_private_page content'] = array(
    'name' => 'delete own stanford_private_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stanford_affiliate_organization content'.
  $permissions['edit any stanford_affiliate_organization content'] = array(
    'name' => 'edit any stanford_affiliate_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stanford_private_page content'.
  $permissions['edit any stanford_private_page content'] = array(
    'name' => 'edit any stanford_private_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stanford_affiliate_organization content'.
  $permissions['edit own stanford_affiliate_organization content'] = array(
    'name' => 'edit own stanford_affiliate_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stanford_private_page content'.
  $permissions['edit own stanford_private_page content'] = array(
    'name' => 'edit own stanford_private_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  return $permissions;
}
