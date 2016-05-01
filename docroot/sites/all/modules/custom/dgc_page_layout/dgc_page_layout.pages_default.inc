<?php
/**
 * @file
 * dgc_page_layout.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function dgc_page_layout_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_1cbf1e90-2219-4dbc-9dd1-8de9961d3591';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'GovCon 2016 Main',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'omega:govcon-simple';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'branding' => NULL,
      'header' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'help' => NULL,
      'content' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'footer' => NULL,
      'banner' => NULL,
      'lower_first' => NULL,
      'lower_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '74a7e8f3-2d6d-4d0e-8c06-73ef96bca5b7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-58f2f634-3b3c-4185-9c4c-b4154c6bef47';
  $pane->panel = 'banner';
  $pane->type = 'views';
  $pane->subtype = 'banner_image';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '58f2f634-3b3c-4185-9c4c-b4154c6bef47';
  $display->content['new-58f2f634-3b3c-4185-9c4c-b4154c6bef47'] = $pane;
  $display->panels['banner'][0] = 'new-58f2f634-3b3c-4185-9c4c-b4154c6bef47';
  $pane = new stdClass();
  $pane->pid = 'new-1d5ce1a5-d3cc-475e-8c0e-83354db6deda';
  $pane->panel = 'branding';
  $pane->type = 'page_logo';
  $pane->subtype = 'page_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1d5ce1a5-d3cc-475e-8c0e-83354db6deda';
  $display->content['new-1d5ce1a5-d3cc-475e-8c0e-83354db6deda'] = $pane;
  $display->panels['branding'][0] = 'new-1d5ce1a5-d3cc-475e-8c0e-83354db6deda';
  $pane = new stdClass();
  $pane->pid = 'new-3df7c790-14b6-4c10-b20a-2b971f9b55cf';
  $pane->panel = 'content';
  $pane->type = 'pane_messages';
  $pane->subtype = 'pane_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3df7c790-14b6-4c10-b20a-2b971f9b55cf';
  $display->content['new-3df7c790-14b6-4c10-b20a-2b971f9b55cf'] = $pane;
  $display->panels['content'][0] = 'new-3df7c790-14b6-4c10-b20a-2b971f9b55cf';
  $pane = new stdClass();
  $pane->pid = 'new-0549e582-4613-41d0-9a05-eccebef8bd00';
  $pane->panel = 'content';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0549e582-4613-41d0-9a05-eccebef8bd00';
  $display->content['new-0549e582-4613-41d0-9a05-eccebef8bd00'] = $pane;
  $display->panels['content'][1] = 'new-0549e582-4613-41d0-9a05-eccebef8bd00';
  $pane = new stdClass();
  $pane->pid = 'new-5e35e6aa-02b9-4a71-ae85-3f2455890a18';
  $pane->panel = 'content';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5e35e6aa-02b9-4a71-ae85-3f2455890a18';
  $display->content['new-5e35e6aa-02b9-4a71-ae85-3f2455890a18'] = $pane;
  $display->panels['content'][2] = 'new-5e35e6aa-02b9-4a71-ae85-3f2455890a18';
  $pane = new stdClass();
  $pane->pid = 'new-4d793f03-7e9a-42f5-8af6-32a55e0255bb';
  $pane->panel = 'lower_second';
  $pane->type = 'views';
  $pane->subtype = 'location_map';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'attachment_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4d793f03-7e9a-42f5-8af6-32a55e0255bb';
  $display->content['new-4d793f03-7e9a-42f5-8af6-32a55e0255bb'] = $pane;
  $display->panels['lower_second'][0] = 'new-4d793f03-7e9a-42f5-8af6-32a55e0255bb';
  $pane = new stdClass();
  $pane->pid = 'new-1dbf65ae-da59-41aa-b7d3-f85fd41af2a1';
  $pane->panel = 'navigation';
  $pane->type = 'block';
  $pane->subtype = 'menu-main-menu-govcon-2016';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1dbf65ae-da59-41aa-b7d3-f85fd41af2a1';
  $display->content['new-1dbf65ae-da59-41aa-b7d3-f85fd41af2a1'] = $pane;
  $display->panels['navigation'][0] = 'new-1dbf65ae-da59-41aa-b7d3-f85fd41af2a1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_1cbf1e90-2219-4dbc-9dd1-8de9961d3591'] = $handler;

  return $export;
}